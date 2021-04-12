/*
* Generated on Thursday, January 14, 2021 at 2:21:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)CADObjectIDsFromEKObjectIDs:(id)arg1 ;
+(id)objectIDWithURL:(id)arg1 ;
+(id)EKObjectIDsFromCADObjectIDs:(id)arg1 ;
+(id)temporaryObjectIDWithEntityType:(int)arg1 ;
+(id)objectIDWithCADObjectID:(id)arg1 ;
+(id)objectIDWithEntityType:(int)arg1 rowID:(int)arg2 ;
-(long long)entityType;
-(int)rowID;
-(NSDictionary *)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSString *)entityName;
-(BOOL)isTemporary;
-(NSString *)stringRepresentation;
-(NSURL *)URIRepresentation;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithEntityType:(int)arg1 rowID:(int)arg2 temporary:(BOOL)arg3 ;
-(id)description;
-(CADObjectID *)CADObjectID;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

