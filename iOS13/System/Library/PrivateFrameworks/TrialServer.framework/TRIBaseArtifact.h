/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/


@class NSData, NSURL;

@interface TRIBaseArtifact : NSObject {

	NSData* encodedDefinition;
	NSURL* _url;

}

@property (retain) NSData * encodedDefinition; 
@property (readonly) NSURL * url;                           //@synthesize url=_url - In the implementation block
+(BOOL)fileExists:(id)arg1 ;
+(BOOL)createDirectoryForUrl:(id)arg1 isDirectory:(BOOL)arg2 ;
+(BOOL)saveEncodedDefinition:(id)arg1 toUrl:(id)arg2 ;
-(BOOL)isValid;
-(NSURL *)url;
-(BOOL)remove;
-(id)save;
-(BOOL)removeItemAtPath:(id)arg1 ;
-(BOOL)loadFromUrl:(id)arg1 ;
-(id)saveToUrl:(id)arg1 ;
-(NSData *)encodedDefinition;
-(void)setEncodedDefinition:(NSData *)arg1 ;
-(void)loadPropertiesFromDictionary:(id)arg1 ;
-(id)savePropertiesToDictionary;
-(id)artifactWithBaseUrl:(id)arg1 ;
-(BOOL)removeFromUrl:(id)arg1 ;
-(id)copyFileFromUrl:(id)arg1 to:(id)arg2 targetIsDirectory:(BOOL)arg3 ;
@end

