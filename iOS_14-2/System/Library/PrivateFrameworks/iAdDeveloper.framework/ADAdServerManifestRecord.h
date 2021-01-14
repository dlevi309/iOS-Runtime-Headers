/*
* Generated on Thursday, January 14, 2021 at 2:28:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)lastUpdate;
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(void)setTemporary:(BOOL)arg1 ;
-(void)setLastUpdate:(double)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(BOOL)temporary;
-(NSString *)name;
-(NSDictionary *)manifest;
-(NSURL *)URL;
-(void)setName:(NSString *)arg1 ;
-(void)setManifest:(NSDictionary *)arg1 ;
-(BOOL)updateInProgress;
-(void)setUpdateInProgress:(BOOL)arg1 ;
-(void)dealloc;
@end

