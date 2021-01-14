/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AMSTask.h>

@class AMSDialogRequest;

@interface AMSCommandLineDialogTask : AMSTask {

	AMSDialogRequest* _request;
	double _maximumDialogWidth;
	double _minimumDialogWidth;
	double _dialogPadding;
	long long _automaticButtonSelection;

}

@property (nonatomic,readonly) AMSDialogRequest * request;                    //@synthesize request=_request - In the implementation block
@property (assign,nonatomic) double maximumDialogWidth;                       //@synthesize maximumDialogWidth=_maximumDialogWidth - In the implementation block
@property (assign,nonatomic) double minimumDialogWidth;                       //@synthesize minimumDialogWidth=_minimumDialogWidth - In the implementation block
@property (assign,nonatomic) double dialogPadding;                            //@synthesize dialogPadding=_dialogPadding - In the implementation block
@property (assign,nonatomic) long long automaticButtonSelection;              //@synthesize automaticButtonSelection=_automaticButtonSelection - In the implementation block
-(id)present;
-(AMSDialogRequest *)request;
-(id)initWithRequest:(id)arg1 ;
-(double)minimumDialogWidth;
-(double)dialogPadding;
-(double)maximumDialogWidth;
-(id)_createHorizontolLineWithWidth:(long long)arg1 ;
-(id)_createLinesFromText:(id)arg1 width:(long long)arg2 ;
-(id)_createText:(id)arg1 width:(long long)arg2 centered:(BOOL)arg3 omitLeftPipe:(BOOL)arg4 ;
-(id)_createTextfieldWithTextfield:(id)arg1 width:(long long)arg2 ;
-(void)_printMessage:(id)arg1 ;
-(id)_gatherTextfieldInput;
-(long long)automaticButtonSelection;
-(id)_getUserInput;
-(long long)_gatherButtonInput;
-(void)setMaximumDialogWidth:(double)arg1 ;
-(void)setMinimumDialogWidth:(double)arg1 ;
-(void)setDialogPadding:(double)arg1 ;
-(void)setAutomaticButtonSelection:(long long)arg1 ;
@end

