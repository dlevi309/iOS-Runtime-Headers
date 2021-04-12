/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EventKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL, NSDictionary, CADObjectID;

@interface EKObjectID : NSObject <NSCopying, NSSecureCoding> {

	BOOL _temporary;
	int _entityType;
	int _rowID;

}

@property (nonatomic,readonly) NSString * entityName; 
@property (nonatomic,readonly) long long entityType; 
@property (nonatomic,readonly) int rowID; 
@property (nonatomic,readonly) BOOL isTemporary; 
@property (nonatomic,readonly) NSString * stringRepresentation; 
@property (nonatomic,readonly) NSURL * URIRepresentation; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) CADObjectID * CADObjectID; 
+(BOOL)supportsSecureCoding;
+(id)objectIDWithURL:(id)arg1 ;
+(id)objectIDWithEntityType:(int)arg1 rowID:(int)arg2 ;
+(id)objectIDWithCADObjectID:(id)arg1 ;
+(id)EKObjectIDsFromCADObjectIDs:(id)arg1 ;
+(id)temporaryObjectIDWithEntityType:(int)arg1 ;
+(id)CADObjectIDsFromEKObjectIDs:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)stringRepresentation;
-(NSString *)entityName;
-(NSURL *)URIRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(long long)entityType;
-(BOOL)isTemporary;
-(int)rowID;
-(CADObjectID *)CADObjectID;
-(id)initWithEntityType:(int)arg1 rowID:(int)arg2 temporary:(BOOL)arg3 ;
@end

