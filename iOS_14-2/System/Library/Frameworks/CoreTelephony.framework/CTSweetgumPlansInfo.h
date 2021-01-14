/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)planGroups;
-(NSString *)morePlansURL;
-(void)setPlanGroups:(NSArray *)arg1 ;
-(void)setMorePlansURL:(NSString *)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

