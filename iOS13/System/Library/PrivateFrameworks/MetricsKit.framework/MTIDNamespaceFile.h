/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/


@class NSString, NSDictionary, MTInterprocessChangeNotifier;

@interface MTIDNamespaceFile : NSObject {

	NSString* _fileName;
	NSDictionary* _options;
	MTInterprocessChangeNotifier* _changeNotifier;

}

@property (nonatomic,retain) NSString * fileName;                                        //@synthesize fileName=_fileName - In the implementation block
@property (retain) NSDictionary * options;                                               //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) MTInterprocessChangeNotifier * changeNotifier;              //@synthesize changeNotifier=_changeNotifier - In the implementation block
+(id)optionsFromData:(id)arg1 error:(id*)arg2 ;
+(id)dataFromOptions:(id)arg1 error:(id*)arg2 ;
-(NSDictionary *)options;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSString *)fileName;
-(void)setFileName:(NSString *)arg1 ;
-(MTInterprocessChangeNotifier *)changeNotifier;
-(void)setChangeNotifier:(MTInterprocessChangeNotifier *)arg1 ;
-(id)lockFileWithFlags:(int)arg1 block:(/*^block*/id)arg2 ;
-(id)initWithFileName:(id)arg1 shouldDisableChangeNotifications:(BOOL)arg2 ;
-(id)updateOptions:(id)arg1 resetSeed:(BOOL)arg2 ;
-(id)deleteFile;
-(id)optionsWithCachePolicy:(long long)arg1 ;
@end

