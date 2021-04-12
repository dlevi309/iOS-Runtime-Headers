/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/VoiceServices/PlugIns/VoiceDial.vsplugin/VoiceDial
*/


@class NSString, VSRecognitionResult;

@interface VDDisambiguationAddressBookContext : NSObject {

	BOOL _resultFound;
	int _previousNameProperty;
	NSString* _previousName;
	NSString* _matchedName;
	VSRecognitionResult* _result;

}

@property (assign) int previousNameProperty;                            //@synthesize previousNameProperty=_previousNameProperty - In the implementation block
@property (nonatomic,retain) NSString * previousName;                   //@synthesize previousName=_previousName - In the implementation block
@property (nonatomic,retain) NSString * matchedName;                    //@synthesize matchedName=_matchedName - In the implementation block
@property (nonatomic,retain) VSRecognitionResult * result;              //@synthesize result=_result - In the implementation block
@property (assign) BOOL resultFound;                                    //@synthesize resultFound=_resultFound - In the implementation block
-(void)setResult:(VSRecognitionResult *)arg1 ;
-(VSRecognitionResult *)result;
-(int)previousNameProperty;
-(void)setPreviousNameProperty:(int)arg1 ;
-(NSString *)previousName;
-(void)setPreviousName:(NSString *)arg1 ;
-(NSString *)matchedName;
-(void)setMatchedName:(NSString *)arg1 ;
-(BOOL)resultFound;
-(void)setResultFound:(BOOL)arg1 ;
@end

