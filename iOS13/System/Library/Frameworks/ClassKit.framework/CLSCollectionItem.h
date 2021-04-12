/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
*/

#import <ClassKit/CLSObject.h>
#import <libobjc.A.dylib/CLSRelationable.h>

@class NSString;

@interface CLSCollectionItem : CLSObject <CLSRelationable> {

	long long _type;
	NSString* _referenceObjectID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long type;                          //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * referenceObjectID;              //@synthesize referenceObjectID=_referenceObjectID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)relations;
-(NSString *)description;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(id)dictionaryRepresentation;
-(id)initWithType:(long long)arg1 ;
-(BOOL)validateObject:(id*)arg1 ;
-(id)initWithHandout:(id)arg1 ;
-(void)setReferenceObjectID:(NSString *)arg1 ;
-(NSString *)referenceObjectID;
@end

