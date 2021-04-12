/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
*/

#import <iTunesStore/iTunesStore-Structs.h>
#import <iTunesStore/ISOperation.h>

@class NSURL, NSArray;

@interface ISURLResolverOperation : ISOperation {

	CFHostRef _host;
	NSURL* _url;
	NSURL* _URL;

}

@property (nonatomic,copy) NSURL * URL;                             //@synthesize URL=_URL - In the implementation block
@property (readonly) NSArray * resolvedAddresses; 
@property (readonly) NSArray * resolvedAddressStrings; 
-(void)dealloc;
-(void)run;
-(id)initWithURL:(id)arg1 ;
-(id)url;
-(void)setURL:(NSURL *)arg1 ;
-(NSURL *)URL;
-(void)setUrl:(id)arg1 ;
-(NSArray *)resolvedAddresses;
-(void)_runLookupForHostname:(id)arg1 ;
-(void)_resolutionCompletedWithError:(id)arg1 ;
-(NSArray *)resolvedAddressStrings;
@end

