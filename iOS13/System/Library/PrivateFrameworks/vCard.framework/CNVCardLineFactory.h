/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
*/

#import <libobjc.A.dylib/CNVCardLineFactory.h>

@protocol CNVCardLineFactory <NSObject>
@required
-(id)stringLineWithName:(id)arg1 value:(id)arg2;
-(id)versionPlaceholderLine;
-(id)arrayLineWithName:(id)arg1 value:(id)arg2;
-(id)arrayLineWithName:(id)arg1 value:(id)arg2 itemSeparator:(id)arg3;
-(id)lineWithLiteralValue:(id)arg1;
-(id)dataLineWithName:(id)arg1 value:(id)arg2;

@end


@class NSString;

@interface CNVCardLineFactory : NSObject <CNVCardLineFactory>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)version30LineFactory;
+(id)version21LineFactory;
-(id)stringLineWithName:(id)arg1 value:(id)arg2 ;
-(id)versionPlaceholderLine;
-(id)arrayLineWithName:(id)arg1 value:(id)arg2 ;
-(id)arrayLineWithName:(id)arg1 value:(id)arg2 itemSeparator:(id)arg3 ;
-(id)lineWithLiteralValue:(id)arg1 ;
-(id)dataLineWithName:(id)arg1 value:(id)arg2 ;
@end

