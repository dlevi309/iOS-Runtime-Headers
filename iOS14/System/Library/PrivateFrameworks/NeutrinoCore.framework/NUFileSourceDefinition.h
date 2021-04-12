/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NUSingleSourceDefinition.h>

@class NSURL, NSString;

@interface NUFileSourceDefinition : NUSingleSourceDefinition {

	BOOL _useEmbeddedPreview;
	NSURL* _url;
	NSString* _uti;

}

@property (readonly) NSURL * url;                                  //@synthesize url=_url - In the implementation block
@property (readonly) NSString * uti;                               //@synthesize uti=_uti - In the implementation block
@property (assign,nonatomic) BOOL useEmbeddedPreview;              //@synthesize useEmbeddedPreview=_useEmbeddedPreview - In the implementation block
-(NSString *)uti;
-(long long)mediaType;
-(id)init;
-(NSURL *)url;
-(id)description;
-(BOOL)useEmbeddedPreview;
-(id)generateSourceNodeWithIdentifier:(id)arg1 error:(out id*)arg2 ;
-(id)initWithURL:(id)arg1 UTI:(id)arg2 ;
-(void)setUseEmbeddedPreview:(BOOL)arg1 ;
@end

