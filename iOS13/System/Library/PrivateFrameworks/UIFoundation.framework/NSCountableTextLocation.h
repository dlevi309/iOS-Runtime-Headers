/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/

#import <libobjc.A.dylib/NSTextLocationPrivate.h>

@class NSString;

@interface NSCountableTextLocation : NSObject <NSTextLocationPrivate> {

	unsigned long long _characterIndex;

}

@property (readonly) unsigned long long characterIndex;                      //@synthesize characterIndex=_characterIndex - In the implementation block
@property (getter=isEndOfDocument,readonly) BOOL endOfDocument; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * type; 
+(id)endOfDocumentLocation;
-(NSString *)description;
-(NSString *)type;
-(long long)compare:(id)arg1 ;
-(id)initWithIndex:(unsigned long long)arg1 ;
-(BOOL)isEndOfDocument;
-(unsigned long long)characterIndex;
@end

