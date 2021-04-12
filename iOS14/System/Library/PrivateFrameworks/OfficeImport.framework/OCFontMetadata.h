/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class OCFontSig, OCFontPanose1, NSArray;

@interface OCFontMetadata : NSObject {

	int _charSet;
	int _pitch;
	int _genericFamily;
	OCFontSig* _sig;
	OCFontPanose1* _panose1;
	NSArray* _altNames;

}

@property (nonatomic,readonly) OCFontSig * sig;                      //@synthesize sig=_sig - In the implementation block
@property (nonatomic,readonly) int charSet;                          //@synthesize charSet=_charSet - In the implementation block
@property (nonatomic,readonly) OCFontPanose1 * panose1;              //@synthesize panose1=_panose1 - In the implementation block
@property (nonatomic,readonly) int pitch;                            //@synthesize pitch=_pitch - In the implementation block
@property (nonatomic,readonly) int genericFamily;                    //@synthesize genericFamily=_genericFamily - In the implementation block
@property (nonatomic,readonly) NSArray * altNames;                   //@synthesize altNames=_altNames - In the implementation block
+(id)fontMetadataWithSig:(id)arg1 charSet:(int)arg2 panose1:(id)arg3 pitch:(int)arg4 genericFamily:(int)arg5 altNames:(id)arg6 ;
-(int)pitch;
-(OCFontSig *)sig;
-(int)charSet;
-(OCFontPanose1 *)panose1;
-(id)initWithSig:(id)arg1 charSet:(int)arg2 panose1:(id)arg3 pitch:(int)arg4 genericFamily:(int)arg5 altNames:(id)arg6 ;
-(int)genericFamily;
-(NSArray *)altNames;
@end

