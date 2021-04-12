/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NTPBVanityURLMapping;

@interface FCVanityURLMapper : NSObject {

	NTPBVanityURLMapping* _vanityURLMapping;

}

@property (nonatomic,copy,readonly) NTPBVanityURLMapping * vanityURLMapping;              //@synthesize vanityURLMapping=_vanityURLMapping - In the implementation block
-(id)init;
-(id)initWithVanityURLMapping:(id)arg1 ;
-(id)URLForVanityURL:(id)arg1 ;
-(id)_standardizedInputPathWithPath:(id)arg1 ;
-(NTPBVanityURLMapping *)vanityURLMapping;
-(id)_standardizedMappingPathWithPath:(id)arg1 ;
-(void)_standardizeResultPath:(id)arg1 ;
-(id)_pathWithTrailingForwardSlashWithPath:(id)arg1 ;
@end

