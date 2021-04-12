/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
*/

#import <ShazamKit/SHConfiguration.h>

@class NSMutableArray, NSString;

@interface SHLocalConfiguration : SHConfiguration {

	NSMutableArray* _localItems;
	NSString* _configurationID;

}

@property (nonatomic,readonly) NSMutableArray * localItems;              //@synthesize localItems=_localItems - In the implementation block
@property (nonatomic,readonly) NSString * configurationID;               //@synthesize configurationID=_configurationID - In the implementation block
-(id)init;
-(NSString *)configurationID;
-(NSMutableArray *)localItems;
-(double)minimumSignatureLength;
-(BOOL)addSignature:(id)arg1 representing:(id)arg2 error:(id*)arg3 ;
@end

