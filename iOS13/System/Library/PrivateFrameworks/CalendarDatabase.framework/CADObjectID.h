/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarDatabase.framework/CalendarDatabase
*/

#import <CalendarDatabase/CalendarDatabase-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CADObjectID : NSObject <NSCopying, NSSecureCoding> {

	BOOL _temporary;
	int _entityType;
	int _entityID;

}

@property (nonatomic,readonly) int entityType;                                 //@synthesize entityType=_entityType - In the implementation block
@property (nonatomic,readonly) int entityID;                                   //@synthesize entityID=_entityID - In the implementation block
@property (getter=isTemporary,nonatomic,readonly) BOOL temporary;              //@synthesize temporary=_temporary - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)stringRepresentation;
-(id)entityName;
-(id)URIRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(int)entityID;
-(int)entityType;
-(BOOL)isTemporary;
-(id)initWithEntityType:(int)arg1 entityID:(int)arg2 ;
@end

