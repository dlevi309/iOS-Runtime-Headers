/*
* Generated on Thursday, January 14, 2021 at 2:22:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setResult:(SFSearchResult *)arg1 ;
-(id)initWithResult:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(SFSearchResult *)result;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

