/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUI-Structs.h>
#import <SearchUI/SearchUIAccessoryViewController.h>
#import <libobjc.A.dylib/CNContactInlineActionsViewControllerDelegate.h>
#import <libobjc.A.dylib/CNUIObjectViewControllerDelegate.h>
#import <libobjc.A.dylib/CNActionViewDelegate.h>
#import <libobjc.A.dylib/NUIContainerViewDelegate.h>

@class CNContactInlineActionsViewController, UIView, NSURL, NSData, NSString;

@interface SearchUIInlineActionsViewController : SearchUIAccessoryViewController <CNContactInlineActionsViewControllerDelegate, CNUIObjectViewControllerDelegate, CNActionViewDelegate, NUIContainerViewDelegate> {

	CNContactInlineActionsViewController* _inlineActionsViewController;
	UIView* _messageButton;
	NSURL* _messageURL;
	UIView* _directionsButton;
	NSData* _mapsData;
	NSString* _name;
	double _latitude;
	double _longitude;

}

@property (nonatomic,retain) CNContactInlineActionsViewController * inlineActionsViewController;              //@synthesize inlineActionsViewController=_inlineActionsViewController - In the implementation block
@property (nonatomic,retain) UIView * messageButton;                                                          //@synthesize messageButton=_messageButton - In the implementation block
@property (nonatomic,retain) NSURL * messageURL;                                                              //@synthesize messageURL=_messageURL - In the implementation block
@property (nonatomic,retain) UIView * directionsButton;                                                       //@synthesize directionsButton=_directionsButton - In the implementation block
@property (nonatomic,retain) NSData * mapsData;                                                               //@synthesize mapsData=_mapsData - In the implementation block
@property (nonatomic,retain) NSString * name;                                                                 //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) double latitude;                                                                 //@synthesize latitude=_latitude - In the implementation block
@property (assign,nonatomic) double longitude;                                                                //@synthesize longitude=_longitude - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsRowModel:(id)arg1 ;
+(id)directionsButtonImage;
-(NSString *)name;
-(unsigned long long)type;
-(void)setName:(NSString *)arg1 ;
-(double)latitude;
-(double)longitude;
-(void)setLongitude:(double)arg1 ;
-(void)setLatitude:(double)arg1 ;
-(NSData *)mapsData;
-(void)setMapsData:(NSData *)arg1 ;
-(void)setMessageURL:(NSURL *)arg1 ;
-(NSURL *)messageURL;
-(void)updateWithContacts:(id)arg1 ;
-(void)contactInlineActionsViewController:(id)arg1 willPerformActionOfType:(id)arg2 ;
-(id)hostingViewControllerForController:(id)arg1 ;
-(void)didPressActionView:(id)arg1 longPress:(BOOL)arg2 ;
-(CGSize)containerView:(id)arg1 systemLayoutSizeFittingSize:(CGSize)arg2 forArrangedSubview:(id)arg3 ;
-(void)setMessageButton:(UIView *)arg1 ;
-(UIView *)messageButton;
-(id)setupView;
-(void)updateWithRowModel:(id)arg1 ;
-(CNContactInlineActionsViewController *)inlineActionsViewController;
-(UIView *)directionsButton;
-(void)setInlineActionsViewController:(CNContactInlineActionsViewController *)arg1 ;
-(void)setDirectionsButton:(UIView *)arg1 ;
@end

