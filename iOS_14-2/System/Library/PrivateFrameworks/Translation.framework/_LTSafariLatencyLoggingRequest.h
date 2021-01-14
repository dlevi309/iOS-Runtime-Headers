/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <libobjc.A.dylib/_LTLoggingRequest.h>

@class _LTLocalePair, NSString, NSDictionary;

@interface _LTSafariLatencyLoggingRequest : NSObject <_LTLoggingRequest> {

	_LTLocalePair* _localePair;
	double _start;
	double _firstResponse;
	double _pageComplete;
	double _firstParagraphComplete;
	NSString* _processName;

}

@property (nonatomic,readonly) double start;                               //@synthesize start=_start - In the implementation block
@property (nonatomic,readonly) double firstResponse;                       //@synthesize firstResponse=_firstResponse - In the implementation block
@property (nonatomic,readonly) double pageComplete;                        //@synthesize pageComplete=_pageComplete - In the implementation block
@property (nonatomic,readonly) double firstParagraphComplete;              //@synthesize firstParagraphComplete=_firstParagraphComplete - In the implementation block
@property (nonatomic,copy) NSString * processName;                         //@synthesize processName=_processName - In the implementation block
@property (nonatomic,readonly) NSDictionary * dict; 
@property (nonatomic,copy) _LTLocalePair * localePair;                     //@synthesize localePair=_localePair - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)setProcessName:(NSString *)arg1 ;
-(id)init;
-(NSDictionary *)dict;
-(double)start;
-(NSString *)processName;
-(void)encodeWithCoder:(id)arg1 ;
-(_LTLocalePair *)localePair;
-(void)markResponse;
-(void)markPageComplete;
-(void)markFirstParagraphComplete;
-(double)firstResponse;
-(double)pageComplete;
-(double)firstParagraphComplete;
-(void)setLocalePair:(_LTLocalePair *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

