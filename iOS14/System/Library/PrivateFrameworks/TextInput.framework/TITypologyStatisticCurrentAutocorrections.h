/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/

#import <TextInput/TITypologyStatistic.h>

@class TIAutocorrectionList, TICandidateRequestToken;

@interface TITypologyStatisticCurrentAutocorrections : TITypologyStatistic {

	TIAutocorrectionList* _autocorrections;
	TICandidateRequestToken* _requestToken;

}

@property (nonatomic,retain) TIAutocorrectionList * autocorrections;              //@synthesize autocorrections=_autocorrections - In the implementation block
@property (nonatomic,retain) TICandidateRequestToken * requestToken;              //@synthesize requestToken=_requestToken - In the implementation block
-(TICandidateRequestToken *)requestToken;
-(void)setRequestToken:(TICandidateRequestToken *)arg1 ;
-(TIAutocorrectionList *)autocorrections;
-(void)setAutocorrections:(TIAutocorrectionList *)arg1 ;
-(void)visitRecordAutocorrections:(id)arg1 ;
@end

