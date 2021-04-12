/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NTPBVanityURLMapping;

@interface FCVanityURLMapper : NSObject {

	NTPBVanityURLMapping* _vanityURLMapping;

}

@property (nonatomic,copy,readonly) NTPBVanityURLMapping * vanityURLMapping;              //@synthesize vanityURLMapping=_vanityURLMapping - In the implementation block
-(id)init;
-(id)_standardizedInputPathWithPath:(id)arg1 ;
-(NTPBVanityURLMapping *)vanityURLMapping;
-(void)_standardizeResultPath:(id)arg1 ;
-(id)_standardizedMappingPathWithPath:(id)arg1 ;
-(void)_setParametersIfNeededWithComponents:(id)arg1 parameters:(id)arg2 ;
-(id)_pathWithTrailingForwardSlashWithPath:(id)arg1 ;
-(id)_standardizedQueryWithParameters:(id)arg1 query:(id)arg2 ;
-(id)_standardizedFragmentWithParameters:(id)arg1 fragment:(id)arg2 ;
-(id)initWithVanityURLMapping:(id)arg1 ;
-(id)URLForVanityURL:(id)arg1 ;
@end

