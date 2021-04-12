/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NSDictionary, NSSet;

@interface CRKAnnotatedCredentialManifest : NSObject <NSSecureCoding> {

	BOOL _modified;
	NSMutableDictionary* _annotationsByPersistentID;

}

@property (nonatomic,readonly) NSMutableDictionary * annotationsByPersistentID;              //@synthesize annotationsByPersistentID=_annotationsByPersistentID - In the implementation block
@property (assign,nonatomic) BOOL modified;                                                  //@synthesize modified=_modified - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * debugInfo; 
@property (nonatomic,copy,readonly) NSSet * persistentIDs; 
+(BOOL)supportsSecureCoding;
+(id)manifestWithData:(id)arg1 ;
-(id)dataRepresentation;
-(id)init;
-(NSSet *)persistentIDs;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)modified;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEmpty;
-(void)setModified:(BOOL)arg1 ;
-(NSDictionary *)debugInfo;
-(void)removePersistentID:(id)arg1 ;
-(void)addPersistentID:(id)arg1 withAnnotation:(id)arg2 ;
-(id)annotationForPersistentID:(id)arg1 ;
-(NSMutableDictionary *)annotationsByPersistentID;
@end

