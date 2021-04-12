/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
*/

#import <ClassKit/CLSObject.h>
#import <libobjc.A.dylib/CLSRelationable.h>

@class NSString;

@interface CLSCollectionItem : CLSObject <CLSRelationable> {

	long long _type;
	NSString* _referenceObjectID;
	unsigned long long _displayOrder;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long type;                               //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * referenceObjectID;                   //@synthesize referenceObjectID=_referenceObjectID - In the implementation block
@property (assign,nonatomic) unsigned long long displayOrder;              //@synthesize displayOrder=_displayOrder - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)relations;
-(id)dictionaryRepresentation;
-(id)initWithType:(long long)arg1 ;
-(void)setDisplayOrder:(unsigned long long)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setType:(long long)arg1 ;
-(NSString *)description;
-(unsigned long long)displayOrder;
-(long long)type;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(void)mergeWithObject:(id)arg1 ;
-(BOOL)validateObject:(id*)arg1 ;
-(id)initWithHandout:(id)arg1 ;
-(void)setReferenceObjectID:(NSString *)arg1 ;
-(NSString *)referenceObjectID;
@end

