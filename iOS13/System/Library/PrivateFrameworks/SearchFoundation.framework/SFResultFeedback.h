/*
* Generated on Monday, March 1, 2021 at 2:30:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <SearchFoundation/SFFeedback.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SFSearchResult;

@interface SFResultFeedback : SFFeedback <NSCopying> {

	SFSearchResult* _result;

}

@property (nonatomic,retain) SFSearchResult * result;              //@synthesize result=_result - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SFSearchResult *)result;
-(void)setResult:(SFSearchResult *)arg1 ;
-(id)initWithResult:(id)arg1 ;
@end

