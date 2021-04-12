/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
*/

#import <libobjc.A.dylib/WGDatum.h>

@class NSString, NSExtension;

@interface WGWidgetDatum : NSObject <WGDatum> {

	NSExtension* _representedExtension;

}

@property (nonatomic,readonly) NSExtension * representedExtension;              //@synthesize representedExtension=_representedExtension - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * datumIdentifier; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)initWithExtension:(id)arg1 ;
-(NSString *)datumIdentifier;
-(NSExtension *)representedExtension;
@end

