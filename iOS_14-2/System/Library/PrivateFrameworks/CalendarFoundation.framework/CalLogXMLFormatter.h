/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
*/

#import <CalendarFoundation/CalLogFormatter.h>

@class NSString;

@interface CalLogXMLFormatter : NSObject <CalLogFormatter> {

	BOOL _shouldPrettyPrint;
	BOOL _useTinyElementNames;

}

@property (assign,nonatomic) BOOL shouldPrettyPrint;                //@synthesize shouldPrettyPrint=_shouldPrettyPrint - In the implementation block
@property (assign,nonatomic) BOOL useTinyElementNames;              //@synthesize useTinyElementNames=_useTinyElementNames - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)newFormattedString:(id)arg1 ;
-(BOOL)shouldPrettyPrint;
-(void)setShouldPrettyPrint:(BOOL)arg1 ;
-(BOOL)useTinyElementNames;
-(void)setUseTinyElementNames:(BOOL)arg1 ;
@end

