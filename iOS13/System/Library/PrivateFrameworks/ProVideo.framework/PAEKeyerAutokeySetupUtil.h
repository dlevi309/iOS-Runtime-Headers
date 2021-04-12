/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


#import <ProVideo/ProVideo-Structs.h>
@class PAEKeyerAutokeySetup, PAEKeyerHistogram;

@interface PAEKeyerAutokeySetupUtil : NSObject {

	id _apiManager;
	PAEKeyerAutokeySetup* _autokeySetup;
	PAEKeyerHistogram* _keyerHistogram;
	id _actionAPI;
	id _getAPI;
	id _setAPI;

}
-(void)dealloc;
-(void)setHistogram:(ColorHisto*)arg1 ;
-(void)syncWithDB;
-(id)initWithAPIManager:(id)arg1 ;
-(void)getDataFromDB;
-(id)getInitialSamples;
-(int)getSamplesNb;
-(Vec3f)getInitialSample:(int)arg1 ;
-(ColorHisto*)getHistogram;
-(void)syncWithDBAsDefault;
-(void)delInitialSample:(int)arg1 ;
-(void)clearInitialSamples;
-(void)addInitialSample:(Vec3f*)arg1 ;
-(void)fillAutokeySamplesArray:(vector<Vec3f, std::__1::allocator<Vec3f> >*)arg1 ;
@end

