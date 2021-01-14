/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@interface PSIToken : NSObject {

	CFStringRef _string;
	SCD_Struct_PS28 _range;

}

@property (nonatomic,retain) CFStringRef string;                 //@synthesize string=_string - In the implementation block
@property (assign,nonatomic) SCD_Struct_PS28 range;              //@synthesize range=_range - In the implementation block
-(void)setRange:(SCD_Struct_PS28)arg1 ;
-(SCD_Struct_PS28)range;
-(id)initWithString:(CFStringRef)arg1 range:(SCD_Struct_PS28)arg2 ;
-(unsigned long long)hash;
-(CFStringRef)string;
-(void)setString:(CFStringRef)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

