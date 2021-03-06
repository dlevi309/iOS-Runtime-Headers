/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/

#import <libobjc.A.dylib/SNTwoPassRequest.h>
#import <libobjc.A.dylib/SNAnalysisPassStrategyProviding.h>

@class SNTwoPassConfiguration, NSString;

@interface SNCustomTwoPassRequest : NSObject <SNTwoPassRequest, SNAnalysisPassStrategyProviding> {

	/*^block*/id _createSecondPassControllerFunction;
	SNTwoPassConfiguration* _twoPassConfiguration;

}

@property (readonly) SNTwoPassConfiguration * twoPassConfiguration;              //@synthesize twoPassConfiguration=_twoPassConfiguration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long analysisPassStrategy; 
-(id)createSecondPassController;
-(SNTwoPassConfiguration *)twoPassConfiguration;
-(long long)analysisPassStrategy;
-(id)initWithTwoPassConfiguration:(id)arg1 createSecondPassControllerFunction:(/*^block*/id)arg2 ;
@end

