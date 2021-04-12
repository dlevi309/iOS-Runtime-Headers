/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iCloudQuotaUI.framework/iCloudQuotaUI
*/

#import <iCloudQuotaUI/iCloudQuotaUI-Structs.h>
#import <UIKitCore/UITextView.h>

@class NSString, NSArray, NSDictionary;

@interface _ICQTextView : UITextView {

	NSString* _format;
	NSArray* _links;
	NSDictionary* _attributes;

}

@property (nonatomic,retain) NSString * format;                      //@synthesize format=_format - In the implementation block
@property (nonatomic,retain) NSArray * links;                        //@synthesize links=_links - In the implementation block
@property (nonatomic,retain) NSDictionary * attributes;              //@synthesize attributes=_attributes - In the implementation block
-(void)setFormat:(NSString *)arg1 ;
-(NSString *)format;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(NSDictionary *)attributes;
-(BOOL)canBecomeFirstResponder;
-(NSArray *)links;
-(void)setLinks:(NSArray *)arg1 ;
-(void)setAttributedText;
@end

