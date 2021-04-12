/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/SBDateTimeOverrideObserver.h>

@protocol SBCalendarIconImageProviderDelegate;
@class SBDateTimeController, NSString;

@interface SBCalendarIconImageProvider : NSObject <SBDateTimeOverrideObserver> {

	id<SBCalendarIconImageProviderDelegate> _delegate;
	SBDateTimeController* _dateTimeController;

}

@property (assign,nonatomic,__weak) id<SBCalendarIconImageProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) SBDateTimeController * dateTimeController;                          //@synthesize dateTimeController=_dateTimeController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id<SBCalendarIconImageProviderDelegate>)delegate;
-(void)setDelegate:(id<SBCalendarIconImageProviderDelegate>)arg1 ;
-(void)localeChanged;
-(id)iconImageWithInfo:(SBIconImageInfo)arg1 ;
-(id)unmaskedIconImageWithInfo:(SBIconImageInfo)arg1 ;
-(void)reloadIconImage;
-(void)controller:(id)arg1 didChangeOverrideDateFromDate:(id)arg2 ;
-(id)initWithDateTimeController:(id)arg1 ;
-(void)_startListeningForSignificantTimeChanges;
-(void)_stopListeningForSignificantTimeChanges;
-(SBDateTimeController *)dateTimeController;
-(id)preparedISIcon;
@end

