/*
* Generated on Thursday, January 14, 2021 at 2:27:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CTCarrierSpace.framework/CTCarrierSpace
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString;

@interface CTCarrierSpaceAppsInfo : NSObject <NSSecureCoding> {

	NSArray* _appsList;
	NSString* _appsURL;

}

@property (nonatomic,retain) NSArray * appsList;              //@synthesize appsList=_appsList - In the implementation block
@property (nonatomic,retain) NSString * appsURL;              //@synthesize appsURL=_appsURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)appsURL;
-(NSArray *)appsList;
-(void)setAppsURL:(NSString *)arg1 ;
-(void)setAppsList:(NSArray *)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

