/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)description;
-(NSURL *)url;
-(long long)mediaType;
-(NSString *)uti;
-(BOOL)useEmbeddedPreview;
-(id)generateSourceNodeWithIdentifier:(id)arg1 error:(out id*)arg2 ;
-(id)initWithURL:(id)arg1 UTI:(id)arg2 ;
-(void)setUseEmbeddedPreview:(BOOL)arg1 ;
@end

