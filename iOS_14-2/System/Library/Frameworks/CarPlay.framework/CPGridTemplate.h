/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
*/

#import <CarPlay/CPTemplate.h>
#import <libobjc.A.dylib/CPGridTemplateClientDelegate.h>
#import <libobjc.A.dylib/CPBarButtonProviding.h>

@class NSArray, CPBarButton, NSString, NAFuture;

@interface CPGridTemplate : CPTemplate <CPGridTemplateClientDelegate, CPBarButtonProviding> {

	NSArray* _gridButtons;
	NSString* _title;

}

@property (nonatomic,retain) NAFuture * templateProviderFuture; 
@property (nonatomic,readonly) NSArray * gridButtons;                             //@synthesize gridButtons=_gridButtons - In the implementation block
@property (nonatomic,readonly) NSString * title;                                  //@synthesize title=_title - In the implementation block
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
-(NSString *)title;
-(void)handleActionForControlIdentifier:(id)arg1 ;
-(NSArray *)gridButtons;
-(id)initWithTitle:(id)arg1 gridButtons:(id)arg2 ;
@end

