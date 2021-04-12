/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStore/ISOperation.h>

@class ISStoreURLOperation, SUClientInterface, NSString, SUSectionsResponse;

@interface SULoadNetworkSectionsOperation : ISOperation {

	ISStoreURLOperation* _baseOperation;
	SUClientInterface* _clientInterface;
	NSString* _expectedVersionString;
	SUSectionsResponse* _sectionsResponse;

}

@property (retain) ISStoreURLOperation * baseOperation; 
@property (retain) NSString * expectedVersionString; 
@property (readonly) SUSectionsResponse * sectionsResponse; 
-(void)run;
-(void)dealloc;
-(void)_setSectionsResponse:(id)arg1 ;
-(id)initWithURL:(id)arg1 clientInterface:(id)arg2 ;
-(void)setExpectedVersionString:(NSString *)arg1 ;
-(SUSectionsResponse *)sectionsResponse;
-(NSString *)expectedVersionString;
-(BOOL)_loadArtworkForResponse:(id)arg1 ;
-(id)_copyImageWithURL:(id)arg1 scale:(float)arg2 error:(id*)arg3 ;
-(id)_bestItemImageForImages:(id)arg1 withImageKind:(id)arg2 ;
-(id)_copyLoadedItemImage:(id)arg1 error:(id*)arg2 ;
-(ISStoreURLOperation *)baseOperation;
-(void)setBaseOperation:(ISStoreURLOperation *)arg1 ;
@end

