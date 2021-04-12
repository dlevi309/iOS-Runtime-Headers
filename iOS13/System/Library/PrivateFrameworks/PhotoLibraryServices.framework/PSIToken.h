/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@interface PSIToken : NSObject {

	CFStringRef _string;
	SCD_Struct_PS26 _range;

}

@property (nonatomic,retain) CFStringRef string;                 //@synthesize string=_string - In the implementation block
@property (assign,nonatomic) SCD_Struct_PS26 range;              //@synthesize range=_range - In the implementation block
-(CFStringRef)string;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setString:(CFStringRef)arg1 ;
-(SCD_Struct_PS26)range;
-(void)setRange:(SCD_Struct_PS26)arg1 ;
-(id)initWithString:(CFStringRef)arg1 range:(SCD_Struct_PS26)arg2 ;
@end

