/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandServices.framework/SpeechRecognitionCommandServices
*/


#import <SpeechRecognitionCommandServices/SpeechRecognitionCommandServices-Structs.h>
@interface CMDPResult : NSObject {

	unique_ptr<fst::VectorFst<fst::ArcTpl<fst::TropicalWeightTpl<float> >, fst::VectorState<fst::ArcTpl<fst::TropicalWeightTpl<float> >, std::__1::allocator<fst::ArcTpl<fst::TropicalWeightTpl<float> > > > >, std::__1::default_delete<fst::VectorFst<fst::ArcTpl<fst::TropicalWeightTpl<float> >, fst::VectorState<fst::ArcTpl<fst::TropicalWeightTpl<float> >, std::__1::allocator<fst::ArcTpl<fst::TropicalWeightTpl<float> > > > > > >* _resultFst;
	unique_ptr<fst::VectorFst<fst::ArcTpl<fst::TropicalWeightTpl<float> >, fst::VectorState<fst::ArcTpl<fst::TropicalWeightTpl<float> >, std::__1::allocator<fst::ArcTpl<fst::TropicalWeightTpl<float> > > > >, std::__1::default_delete<fst::VectorFst<fst::ArcTpl<fst::TropicalWeightTpl<float> >, fst::VectorState<fst::ArcTpl<fst::TropicalWeightTpl<float> >, std::__1::allocator<fst::ArcTpl<fst::TropicalWeightTpl<float> > > > > > >* _resultEditFst;
	unique_ptr<CMDPNormalizer, std::__1::default_delete<CMDPNormalizer> >* _normalizer;
	vector<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken> >, std::__1::allocator<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken> > > >* _resultNodes;
	set<std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::basic_string<char> > >* _symbol_set;

}
+(vector<std::__1::vector<std::__1::vector<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken> >, std::__1::allocator<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken> > > >, std::__1::allocator<std::__1::vector<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken> >, std::__1::allocator<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken> > > > > >, std::__1::allocator<std::__1::vector<std::__1::vector<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken> >, std::__1::allocator<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken> > > >, std::__1::allocator<std::__1::vector<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken> >, std::__1::allocator<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken> > > > > > > >*)CMDPTokenSausageFromCFTokenSausage:(CFArrayRef)arg1 ;
+(vector<std::__1::vector<std::__1::vector<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken> >, std::__1::allocator<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken> > > >, std::__1::allocator<std::__1::vector<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken> >, std::__1::allocator<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken> > > > > >, std::__1::allocator<std::__1::vector<std::__1::vector<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken> >, std::__1::allocator<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken> > > >, std::__1::allocator<std::__1::vector<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken> >, std::__1::allocator<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken> > > > > > > >*)CMDPTokenSausageFromAFSpeechPhraseArray:(id)arg1 ;
-(id)initWithTokenSausageVec:(vector<std::__1::vector<std::__1::vector<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken> >, std::__1::allocator<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken> > > >, std::__1::allocator<std::__1::vector<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken> >, std::__1::allocator<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken> > > > > >, std::__1::allocator<std::__1::vector<std::__1::vector<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken> >, std::__1::allocator<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken> > > >, std::__1::allocator<std::__1::vector<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken> >, std::__1::allocator<std::__1::unique_ptr<CMDPToken, std::__1::default_delete<CMDPToken> > > > > > > >*)arg1 forLocaleIdentifier:(id)arg2 ;
-(id)createArrayFromNBestResults:(const vector<std::__1::vector<std::__1::pair<std::__1::basic_string<char>, std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char>, std::__1::basic_string<char> > > >, std::__1::allocator<std::__1::vector<std::__1::pair<std::__1::basic_string<char>, std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char>, std::__1::basic_string<char> > > > > >*)arg1 withGrammarData:(id)arg2 ;
-(id)initWithTokenSausage:(CFArrayRef)arg1 forLocaleIdentifier:(id)arg2 ;
-(id)initWithAFSpeechPhraseArray:(id)arg1 forLocaleIdentifier:(id)arg2 ;
-(id)matchWithGrammars:(id)arg1 winningIndex:(int*)arg2 winningDistance:(float*)arg3 ;
@end

