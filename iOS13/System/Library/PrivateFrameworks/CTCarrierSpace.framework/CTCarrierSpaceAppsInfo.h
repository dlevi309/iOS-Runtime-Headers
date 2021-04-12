/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)appsList;
-(NSString *)appsURL;
-(void)setAppsList:(NSArray *)arg1 ;
-(void)setAppsURL:(NSString *)arg1 ;
@end

