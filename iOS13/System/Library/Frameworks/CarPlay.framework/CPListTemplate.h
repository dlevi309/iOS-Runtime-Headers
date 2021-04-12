/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
*/

#import <CarPlay/CPTemplate.h>
#import <libobjc.A.dylib/CPListClientTemplateDelegate.h>
#import <libobjc.A.dylib/CPBarButtonProviding.h>

@protocol CPListTemplateDelegate;
@class NSArray, NSString, NAFuture, CPBarButton;

@interface CPListTemplate : CPTemplate <CPListClientTemplateDelegate, CPBarButtonProviding> {

	id<CPListTemplateDelegate> _delegate;
	NSArray* _sections;
	NSString* _title;

}

@property (nonatomic,retain) NAFuture * templateProviderFuture; 
@property (assign,nonatomic,__weak) id<CPListTemplateDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * sections;                               //@synthesize sections=_sections - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSArray * leadingNavigationBarButtons; 
@property (nonatomic,retain) NSArray * trailingNavigationBarButtons; 
@property (nonatomic,retain) CPBarButton * backButton; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<CPListTemplateDelegate>)delegate;
-(void)setDelegate:(id<CPListTemplateDelegate>)arg1 ;
-(NSString *)title;
-(NSArray *)sections;
-(void)updateSections:(id)arg1 ;
-(void)listTemplate:(id)arg1 didSelectListItem:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithTitle:(id)arg1 sections:(id)arg2 ;
@end

