/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSDictionary;

@interface PSIParsedDate : NSObject {

	NSDictionary* _attributes;
	NSRange _range;
	NSRange _extensionRange;

}

@property (nonatomic,copy,readonly) NSDictionary * attributes;              //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,readonly) NSRange range;                               //@synthesize range=_range - In the implementation block
@property (nonatomic,readonly) NSRange extensionRange;                      //@synthesize extensionRange=_extensionRange - In the implementation block
-(NSRange)range;
-(NSDictionary *)attributes;
-(NSRange)extensionRange;
-(id)initWithAttributes:(id)arg1 range:(NSRange)arg2 extensionRange:(NSRange)arg3 ;
@end

