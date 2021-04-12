/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithRecord:(id)arg1 ;
-(void)encodeWithRecord:(id)arg1 ;
-(NSDate *)updatedDate;
-(void)setUpdatedDate:(NSDate *)arg1 ;
@end

