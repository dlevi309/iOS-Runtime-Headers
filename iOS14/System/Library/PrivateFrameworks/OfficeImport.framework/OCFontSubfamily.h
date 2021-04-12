/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class NSString, OCFontMetadata;

@interface OCFontSubfamily : NSObject {

	NSString* _name;
	OCFontMetadata* _metadata;

}

@property (nonatomic,readonly) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) OCFontMetadata * metadata;              //@synthesize metadata=_metadata - In the implementation block
+(id)fontSubfamilyWithName:(id)arg1 metadata:(id)arg2 ;
-(NSString *)name;
-(OCFontMetadata *)metadata;
-(id)initWithName:(id)arg1 metadata:(id)arg2 ;
@end

