/*
* Generated on Monday, March 1, 2021 at 2:35:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iAdDeveloper.framework/iAdDeveloper
*/


@class NSString, NSURL, NSDictionary;

@interface ADAdServerManifestRecord : NSObject {

	BOOL _updateInProgress;
	BOOL _temporary;
	NSString* _name;
	NSURL* _URL;
	NSDictionary* _manifest;
	double _lastUpdate;

}

@property (nonatomic,copy) NSURL * URL;                            //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL temporary;                       //@synthesize temporary=_temporary - In the implementation block
@property (assign,nonatomic) double lastUpdate;                    //@synthesize lastUpdate=_lastUpdate - In the implementation block
@property (nonatomic,retain) NSDictionary * manifest;              //@synthesize manifest=_manifest - In the implementation block
@property (assign,nonatomic) BOOL updateInProgress;                //@synthesize updateInProgress=_updateInProgress - In the implementation block
-(void)dealloc;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setURL:(NSURL *)arg1 ;
-(NSURL *)URL;
-(double)lastUpdate;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSDictionary *)manifest;
-(void)setManifest:(NSDictionary *)arg1 ;
-(void)setUpdateInProgress:(BOOL)arg1 ;
-(void)setTemporary:(BOOL)arg1 ;
-(BOOL)temporary;
-(void)setLastUpdate:(double)arg1 ;
-(BOOL)updateInProgress;
@end

