/*
* Generated on Monday, March 1, 2021 at 2:35:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSDictionary *)attributes;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(NSString *)format;
-(void)setFormat:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(NSArray *)links;
-(void)setLinks:(NSArray *)arg1 ;
-(void)setAttributedText;
@end

