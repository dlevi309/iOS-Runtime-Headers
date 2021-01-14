/*
* Generated on Thursday, January 14, 2021 at 2:28:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

