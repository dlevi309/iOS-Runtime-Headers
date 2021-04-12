/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <SearchFoundation/SFFeedback.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SFSearchResult, SFCardSection, SFPunchout;

@interface SFUserReportFeedback : SFFeedback <NSCopying> {

	SFSearchResult* _result;
	SFCardSection* _cardSection;
	SFPunchout* _userSelection;

}

@property (nonatomic,retain) SFSearchResult * result;                  //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) SFCardSection * cardSection;              //@synthesize cardSection=_cardSection - In the implementation block
@property (nonatomic,retain) SFPunchout * userSelection;               //@synthesize userSelection=_userSelection - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SFSearchResult *)result;
-(void)setResult:(SFSearchResult *)arg1 ;
-(id)initWithSelection:(id)arg1 result:(id)arg2 cardSection:(id)arg3 ;
-(SFCardSection *)cardSection;
-(void)setCardSection:(SFCardSection *)arg1 ;
-(SFPunchout *)userSelection;
-(void)setUserSelection:(SFPunchout *)arg1 ;
@end

