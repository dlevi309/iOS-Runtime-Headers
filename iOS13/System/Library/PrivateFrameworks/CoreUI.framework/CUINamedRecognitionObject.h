/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUINamedLookup.h>

@class NSData;

@interface CUINamedRecognitionObject : CUINamedLookup

@property (nonatomic,readonly) long long version; 
@property (nonatomic,readonly) NSData * objectData; 
@property (nonatomic,readonly) SCD_Struct_CS10 referenceOriginTransformation; 
-(id)description;
-(long long)version;
-(id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(unsigned long long)arg3 ;
-(SCD_Struct_CS10)referenceOriginTransformation;
-(NSData *)objectData;
@end

