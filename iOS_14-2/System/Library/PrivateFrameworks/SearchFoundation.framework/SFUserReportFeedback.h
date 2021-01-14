/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setResult:(SFSearchResult *)arg1 ;
-(id)initWithSelection:(id)arg1 result:(id)arg2 cardSection:(id)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setCardSection:(SFCardSection *)arg1 ;
-(SFSearchResult *)result;
-(id)initWithCoder:(id)arg1 ;
-(SFPunchout *)userSelection;
-(void)setUserSelection:(SFPunchout *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SFCardSection *)cardSection;
@end

