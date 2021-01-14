/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
*/

#import <CarPlay/CPTemplate.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/CPEntityProviding.h>
#import <libobjc.A.dylib/CPEntityClientTemplateDelegate.h>
#import <libobjc.A.dylib/CPBarButtonProviding.h>

@class CPContact, NAFuture, NSString, NSArray, CPBarButton;

@interface CPContactTemplate : CPTemplate <NSSecureCoding, CPEntityProviding, CPEntityClientTemplateDelegate, CPBarButtonProviding> {

	CPContact* _contact;

}

@property (nonatomic,retain) NAFuture * templateProviderFuture; 
@property (nonatomic,retain) CPContact * contact;                                 //@synthesize contact=_contact - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSArray * leadingNavigationBarButtons; 
@property (nonatomic,retain) NSArray * trailingNavigationBarButtons; 
@property (nonatomic,retain) CPBarButton * backButton; 
+(BOOL)supportsSecureCoding;
-(CPContact *)contact;
-(id)entity;
-(void)setContact:(CPContact *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)performUpdate;
-(id)initWithContact:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)handleActionForControlIdentifier:(id)arg1 ;
@end

