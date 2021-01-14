/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/PKRecordObject.h>

@class NSArray, NSString;

@interface PKAccountPhysicalCardStatusUpdate : NSObject <NSSecureCoding, PKRecordObject> {

	unsigned long long _reason;
	NSArray* _updatedPhysicalCards;

}

@property (assign,nonatomic) unsigned long long reason;                 //@synthesize reason=_reason - In the implementation block
@property (nonatomic,copy) NSArray * updatedPhysicalCards;              //@synthesize updatedPhysicalCards=_updatedPhysicalCards - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)recordType;
+(id)recordNamePrefix;
-(void)encodeWithRecord:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithRecord:(id)arg1 ;
-(NSString *)description;
-(NSArray *)updatedPhysicalCards;
-(unsigned long long)reason;
-(unsigned long long)hash;
-(void)setUpdatedPhysicalCards:(NSArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setReason:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

