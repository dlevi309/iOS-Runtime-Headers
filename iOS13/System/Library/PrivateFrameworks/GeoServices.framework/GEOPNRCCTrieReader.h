/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSData;

@interface GEOPNRCCTrieReader : NSObject {

	CFBurstTrieRef _trie;
	NSData* _ccFile;

}
-(void)dealloc;
-(id)initWithFile:(id)arg1 ;
-(id)lookupCCForPhNumber:(id)arg1 ;
@end

