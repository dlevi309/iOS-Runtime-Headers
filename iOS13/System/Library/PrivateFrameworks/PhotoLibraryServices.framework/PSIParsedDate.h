/*
* Generated on Monday, March 1, 2021 at 2:30:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSDictionary *)attributes;
-(NSRange)range;
-(NSRange)extensionRange;
-(id)initWithAttributes:(id)arg1 range:(NSRange)arg2 extensionRange:(NSRange)arg3 ;
@end

