/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/PKRecordObject.h>

@class NSDate, NSString;

@interface PKAccountUserInfoUpdate : NSObject <NSSecureCoding, PKRecordObject> {

	NSDate* _updatedDate;

}

@property (nonatomic,retain) NSDate * updatedDate;                  //@synthesize updatedDate=_updatedDate - In the implementation block
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
-(unsigned long long)hash;
-(NSDate *)updatedDate;
-(void)setUpdatedDate:(NSDate *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

