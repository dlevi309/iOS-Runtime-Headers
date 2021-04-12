/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/


@class NSString;

@interface SLVideoQualityOption : NSObject {

	NSString* _identifier;
	NSString* _name;
	long long _size;
	NSString* _exportPreset;

}

@property (nonatomic,retain) NSString * identifier;                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) long long size;                       //@synthesize size=_size - In the implementation block
@property (nonatomic,retain) NSString * exportPreset;              //@synthesize exportPreset=_exportPreset - In the implementation block
+(id)videoQualityOptionForIdentifier:(id)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSString *)identifier;
-(long long)size;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setSize:(long long)arg1 ;
-(void)setExportPreset:(NSString *)arg1 ;
-(id)sizeDescription;
-(NSString *)exportPreset;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 exportPreset:(id)arg3 size:(long long)arg4 ;
@end

