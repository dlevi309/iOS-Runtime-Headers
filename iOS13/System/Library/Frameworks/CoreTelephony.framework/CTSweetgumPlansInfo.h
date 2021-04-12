/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString;

@interface CTSweetgumPlansInfo : NSObject <NSSecureCoding> {

	NSArray* _planGroups;
	NSString* _morePlansURL;

}

@property (nonatomic,retain) NSArray * planGroups;                 //@synthesize planGroups=_planGroups - In the implementation block
@property (nonatomic,retain) NSString * morePlansURL;              //@synthesize morePlansURL=_morePlansURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)planGroups;
-(NSString *)morePlansURL;
-(void)setPlanGroups:(NSArray *)arg1 ;
-(void)setMorePlansURL:(NSString *)arg1 ;
@end

