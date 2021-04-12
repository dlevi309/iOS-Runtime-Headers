/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/Photos-Structs.h>
#import <Photos/PHImageRequestOptions.h>

@interface PHAnimatedImageRequestOptions : PHImageRequestOptions {

	BOOL _allowPreCaching;
	BOOL _useSharedImageDecoding;

}

@property (assign,nonatomic) BOOL allowPreCaching;                     //@synthesize allowPreCaching=_allowPreCaching - In the implementation block
@property (assign,nonatomic) BOOL useSharedImageDecoding;              //@synthesize useSharedImageDecoding=_useSharedImageDecoding - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)useSharedImageDecoding;
-(BOOL)allowPreCaching;
-(void)setAllowPreCaching:(BOOL)arg1 ;
-(void)setUseSharedImageDecoding:(BOOL)arg1 ;
@end

