/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
*/

#import <libobjc.A.dylib/RKPolarityDataProvider.h>

@class NSMutableDictionary;

@interface RKLinguisticDataProvider : NSObject <RKPolarityDataProvider> {

	NSMutableDictionary* _polarityMapsByLanguageID;

}

@property (retain) NSMutableDictionary * polarityMapsByLanguageID;              //@synthesize polarityMapsByLanguageID=_polarityMapsByLanguageID - In the implementation block
-(id)init;
-(NSMutableDictionary *)polarityMapsByLanguageID;
-(void)setPolarityMapsByLanguageID:(NSMutableDictionary *)arg1 ;
@end

