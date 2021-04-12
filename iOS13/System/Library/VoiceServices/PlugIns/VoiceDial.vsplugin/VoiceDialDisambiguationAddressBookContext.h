/*
* Generated on Monday, March 1, 2021 at 2:35:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VoiceServices/PlugIns/VoiceDial.vsplugin/VoiceDial
*/


@class NSString;

@interface VoiceDialDisambiguationAddressBookContext : NSObject {

	BOOL _resultFound;
	int _previousNameProperty;
	NSString* _previousName;
	NSString* _matchedName;
	id* _result;

}

@property (retain) NSString * previousName;               //@synthesize previousName=_previousName - In the implementation block
@property (assign) int previousNameProperty;              //@synthesize previousNameProperty=_previousNameProperty - In the implementation block
@property (retain) NSString * matchedName;                //@synthesize matchedName=_matchedName - In the implementation block
@property (assign) id* result;                            //@synthesize result=_result - In the implementation block
@property (assign) BOOL resultFound;                      //@synthesize resultFound=_resultFound - In the implementation block
-(id*)result;
-(void)setResult:(id*)arg1 ;
-(int)previousNameProperty;
-(void)setPreviousNameProperty:(int)arg1 ;
-(NSString *)previousName;
-(void)setPreviousName:(NSString *)arg1 ;
-(NSString *)matchedName;
-(void)setMatchedName:(NSString *)arg1 ;
-(BOOL)resultFound;
-(void)setResultFound:(BOOL)arg1 ;
@end

